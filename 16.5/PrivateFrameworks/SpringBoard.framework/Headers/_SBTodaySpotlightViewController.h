// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBTODAYSPOTLIGHTVIEWCONTROLLER_H
#define _SBTODAYSPOTLIGHTVIEWCONTROLLER_H

@protocol BSInvalidatable;


#import "SBSpotlightMultiplexingViewController.h"

@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, nonatomic) NSObject<BSInvalidatable> *displayLayoutAssertion; // ivar: _displayLayoutAssertion
@property (nonatomic) NSInteger location; // ivar: _location


-(BOOL)_canShowWhileLocked;
-(NSInteger)_displayLayoutElementLevel;
-(NSUInteger)level;
-(NSUInteger)remoteSearchViewPresentationSource;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif