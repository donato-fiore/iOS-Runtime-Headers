// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARWIFIITEM_H
#define _UISTATUSBARWIFIITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarImageView.h"
#import "_UIStatusBarStringView.h"
#import "_UIStatusBarWifiSignalView.h"

@interface _UIStatusBarWifiItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarImageView *networkIconView; // ivar: _networkIconView
@property (retain, nonatomic) _UIStatusBarStringView *rawStringView; // ivar: _rawStringView
@property (retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // ivar: _signalView


+(id)groupWithPriority:(NSInteger)arg0 ;
+(id)iconDisplayIdentifier;
+(id)rawDisplayIdentifier;
+(id)signalStrengthDisplayIdentifier;
-(CGFloat)_barThicknessForUpdate:(id)arg0 ;
-(CGFloat)_interspaceForUpdate:(id)arg0 ;
-(CGFloat)_totalWidthForUpdate:(id)arg0 ;
-(NSInteger)_barCountForUpdate:(id)arg0 ;
-(id)_backgroundColorForUpdate:(id)arg0 entry:(id)arg1 ;
-(id)_fillColorForUpdate:(id)arg0 entry:(id)arg1 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif