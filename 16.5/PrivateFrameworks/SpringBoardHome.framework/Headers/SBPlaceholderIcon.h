// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPLACEHOLDERICON_H
#define SBPLACEHOLDERICON_H

@class NSArray;


#import "SBIcon.h"

@interface SBPlaceholderIcon : SBIcon {
    id *_nodeIdentifier;
    SBIcon *_icon;
    NSArray *_icons;
}


@property (readonly, nonatomic) SBIcon *referencedIcon;
@property (readonly, copy, nonatomic) NSArray *referencedIcons;


+(BOOL)hasIconImage;
+(id)clusteredIconPlaceholderForIcons:(id)arg0 ;
+(id)grabbedIconPlaceholderForIcon:(id)arg0 ;
+(id)grabbedIconPlaceholderForIcons:(id)arg0 ;
+(id)placeholderForIcon:(id)arg0 ;
+(id)placeholderNodeIdentifierForIcon:(id)arg0 ;
+(id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg0 ;
-(BOOL)canReceiveGrabbedIcon;
-(BOOL)isPlaceholder;
-(BOOL)isUninstallSupported;
-(BOOL)referencesIcon:(id)arg0 ;
-(BOOL)referencesIconWithIdentifier:(id)arg0 ;
-(id)_initWithNodeIdentifier:(id)arg0 icon:(id)arg1 ;
-(id)_initWithNodeIdentifier:(id)arg0 icons:(id)arg1 ;
-(id)automationID;
-(id)folder;
-(id)generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)genericIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)gridCellImage;
-(id)nodeIdentifier;
-(void)updateReferencedIcons:(id)arg0 ;


@end


#endif