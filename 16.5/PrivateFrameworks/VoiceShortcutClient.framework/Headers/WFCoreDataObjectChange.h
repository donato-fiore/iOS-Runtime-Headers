// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOREDATAOBJECTCHANGE_H
#define WFCOREDATAOBJECTCHANGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFCoreDataObjectChange : NSObject

@property (readonly, nonatomic) NSString *URIRepresentation; // ivar: _URIRepresentation
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger objectType; // ivar: _objectType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 objectType:(NSUInteger)arg1 identifier:(id)arg2 ;


@end


#endif