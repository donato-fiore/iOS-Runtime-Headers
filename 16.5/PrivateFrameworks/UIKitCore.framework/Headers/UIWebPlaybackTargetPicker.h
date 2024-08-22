// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBPLAYBACKTARGETPICKER_H
#define UIWEBPLAYBACKTARGETPICKER_H

@class MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, NSString;
@protocol UIPopoverControllerDelegate;


#import "UIView.h"
#import "UIWebDocumentView.h"

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate>

 {
    MPAVRoutingController *_routingController;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAVRoutingSheet *_actionSheet;
    UIWebDocumentView *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_dismissAirPlayRoutePickerIPad;
-(void)_presentAirPlayPopoverAnimated:(BOOL)arg0 fromRect:(struct CGRect )arg1 ;
-(void)_windowDidRotate:(id)arg0 ;
-(void)_windowWillRotate:(id)arg0 ;
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)show:(BOOL)arg0 fromRect:(struct CGRect )arg1 ;
-(void)showAirPlayPickerIPad:(NSInteger)arg0 fromRect:(struct CGRect )arg1 ;
-(void)showAirPlayPickerIPhone:(NSInteger)arg0 ;


@end


#endif