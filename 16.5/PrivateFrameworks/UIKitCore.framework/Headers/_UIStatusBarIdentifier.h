// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARIDENTIFIER_H
#define _UISTATUSBARIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIStatusBarIdentifier : NSObject <NSCopying>



@property (copy, nonatomic) id *object; // ivar: _object
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, copy, nonatomic) NSString *stringRepresentation;


+(id)displayIdentifierFromStringRepresentation:(id)arg0 ;
+(id)identifierForObject:(id)arg0 string:(id)arg1 ;
+(id)uninternedIdentifierForObject:(id)arg0 string:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif