// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VITEXTLOOKUPRESULT_H
#define VITEXTLOOKUPRESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VITextLookupResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *sections; // ivar: _sections


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSections:(id)arg0 ;


@end


#endif