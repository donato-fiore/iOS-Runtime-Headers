// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARVOICECONTROLITEM_H
#define _UISTATUSBARVOICECONTROLITEM_H

@class UIStatusBarIndicatorItem;



@interface _UIStatusBarVoiceControlItem : UIStatusBarIndicatorItem



+(id)pillCombinedDisplayIdentifier;
-(CGFloat)imageOpacityForVoiceControlType:(NSInteger)arg0 ;
-(id)_overriddenStyleAttributesForVoiceControlType:(NSInteger)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)imageForUpdate:(id)arg0 ;
-(id)indicatorEntryKey;
-(id)overriddenStyleAttributesForData:(id)arg0 identifier:(id)arg1 ;
-(id)systemImageNameForUpdate:(id)arg0 ;


@end


#endif