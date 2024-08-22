// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUSERNOTIFICATIONASSETDEFINITION_H
#define SBSUSERNOTIFICATIONASSETDEFINITION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBSUserNotificationAssetDefinition : NSObject <NSCopying>





+(id)_definitionFromSerializedDefinition:(id)arg0 ;
+(id)_definitionType;
-(id)_initWithDictionary:(id)arg0 ;
-(id)build;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif