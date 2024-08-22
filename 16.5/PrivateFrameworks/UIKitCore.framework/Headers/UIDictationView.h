// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONVIEW_H
#define UIDICTATIONVIEW_H

@class SUICFlamesView, NSString;
@protocol SUICFlamesViewDelegate, UIDictationViewDisplayDelegate;


#import "UIView.h"
#import "UIKeyboardDicationBackground.h"
#import "UIButton.h"

@interface UIDictationView : UIView <SUICFlamesViewDelegate>

 {
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<UIDictationViewDisplayDelegate> *displayDelegate; // ivar: _displayDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showLanguageLabel; // ivar: _showLanguageLabel
@property (readonly) Class superclass;
@property (nonatomic) BOOL switchingLanguage; // ivar: _switchingLanguage


+(Class)dictationViewClass;
+(id)activeInstance;
+(id)sharedInstance;
+(struct CGSize )layoutSize;
+(struct CGSize )viewSize;
-(BOOL)drawsOwnBackground;
-(BOOL)isShowing;
-(BOOL)visible;
-(float)audioLevelForFlamesView:(id)arg0 ;
-(id)endpointButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )backgroundOffset;
-(struct CGPoint )contentOffset;
-(struct CGPoint )positionForShow;
-(struct CGSize )currentScreenSize;
-(void)applicationEnteredBackground;
-(void)applicationWillResignActive;
-(void)dealloc;
-(void)endpointButtonPressed;
-(void)finishReturnToKeyboard;
-(void)globeButtonPressed:(id)arg0 withEvent:(id)arg1 location:(struct CGPoint )arg2 ;
-(void)highlightEndpointButton;
-(void)keyboardDidShow:(id)arg0 ;
-(void)prepareForReturnToKeyboard;
-(void)removeBackgroundView;
-(void)returnToKeyboard;
-(void)setState:(int)arg0 ;
-(void)show;


@end


#endif