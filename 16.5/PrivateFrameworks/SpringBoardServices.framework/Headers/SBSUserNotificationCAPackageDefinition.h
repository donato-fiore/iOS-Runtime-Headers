// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUSERNOTIFICATIONCAPACKAGEDEFINITION_H
#define SBSUSERNOTIFICATIONCAPACKAGEDEFINITION_H

@class NSString;


#import "SBSUserNotificationAssetDefinition.h"

@interface SBSUserNotificationCAPackageDefinition : SBSUserNotificationAssetDefinition

@property (readonly, copy, nonatomic) NSString *caPackagePath; // ivar: _caPackagePath


+(id)_definitionType;
+(id)definitionWithCAPackagePath:(id)arg0 ;
-(id)_initWithCAPackagePath:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)build;


@end


#endif