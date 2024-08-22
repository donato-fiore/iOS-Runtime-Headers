// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBAROPENINSAFARIITEMVIEW_H
#define UISTATUSBAROPENINSAFARIITEMVIEW_H

@class NSString;


#import "UIStatusBarSystemNavigationItemView.h"
#import "UISystemNavigationAction.h"

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) NSString *destinationText; // ivar: _destinationText
@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // ivar: _systemNavigationAction


-(BOOL)layoutImageOnTrailingEdge;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(id)_displayStringFromURL:(id)arg0 ;
-(id)_nominalTitleWithDestinationText:(id)arg0 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg0 ;
-(void)userDidActivateButton:(id)arg0 ;


@end


#endif