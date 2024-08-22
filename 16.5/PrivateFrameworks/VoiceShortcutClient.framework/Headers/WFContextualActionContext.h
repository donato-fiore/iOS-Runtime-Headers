// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTIONCONTEXT_H
#define WFCONTEXTUALACTIONCONTEXT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionContext : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsExpensiveFetch; // ivar: _allowsExpensiveFetch
@property (retain, nonatomic) NSArray *files; // ivar: _files
@property (retain, nonatomic) NSArray *historicalActionIdentifiers; // ivar: _historicalActionIdentifiers
@property (nonatomic) NSUInteger surface; // ivar: _surface


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSurface:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif