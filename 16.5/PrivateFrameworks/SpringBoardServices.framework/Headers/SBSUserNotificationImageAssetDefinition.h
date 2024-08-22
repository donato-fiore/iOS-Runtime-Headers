// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUSERNOTIFICATIONIMAGEASSETDEFINITION_H
#define SBSUSERNOTIFICATIONIMAGEASSETDEFINITION_H

@class NSString;


#import "SBSUserNotificationImageDefinition.h"

@interface SBSUserNotificationImageAssetDefinition : SBSUserNotificationImageDefinition

@property (readonly, copy, nonatomic) NSString *catalogImageKey; // ivar: _catalogImageKey
@property (readonly, copy, nonatomic) NSString *catalogPath; // ivar: _catalogPath
@property (readonly, copy, nonatomic) NSString *imagePath; // ivar: _imagePath


+(id)_definitionType;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_initWithImagePath:(id)arg0 imageCatalogPath:(id)arg1 catalogImageKey:(id)arg2 ;
-(id)build;
-(id)initWithImageCatalogPath:(id)arg0 catalogImageKey:(id)arg1 ;
-(id)initWithImagePath:(id)arg0 ;


@end


#endif