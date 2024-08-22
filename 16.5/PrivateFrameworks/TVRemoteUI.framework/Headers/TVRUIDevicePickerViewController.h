// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRUIDEVICEPICKERVIEWCONTROLLER_H
#define TVRUIDEVICEPICKERVIEWCONTROLLER_H

@class UIViewController, NSIndexPath, NSString, NSArray, UIView, UITableView, UIButton;
@protocol UITableViewDataSource, UITableViewDelegate, TVRUIRemoteViewProvider, _TVRUIEventDelegate, TVRUIDevicePickerDelegate, TVRUIDevice, TVRUIStyleProvider;


#import "TVREventHaptic.h"
#import "TVRUICubicSpringAnimator.h"

@interface TVRUIDevicePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TVRUIRemoteViewProvider>



@property (nonatomic) CGFloat baseHeight; // ivar: _baseHeight
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonEventDelegate; // ivar: _buttonEventDelegate
@property (copy, nonatomic) NSIndexPath *connectedDeviceIndex; // ivar: _connectedDeviceIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRUIDevicePickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TVRUIDevice> *device; // ivar: _device
@property (nonatomic, getter=isDevicePickerShowing) BOOL devicePickerShowing; // ivar: _devicePickerShowing
@property (retain, nonatomic) NSString *deviceTitle; // ivar: _deviceTitle
@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) TVREventHaptic *eventHaptic; // ivar: _eventHaptic
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRUICubicSpringAnimator *hideAnimator; // ivar: _hideAnimator
@property (retain, nonatomic) UIView *nearbySectionTitleView; // ivar: _nearbySectionTitleView
@property (retain, nonatomic) TVRUICubicSpringAnimator *showAnimator; // ivar: _showAnimator
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UIView *tableViewBottomSeperator; // ivar: _tableViewBottomSeperator
@property (retain, nonatomic) UIView *tableViewTopSeperator; // ivar: _tableViewTopSeperator
@property (retain, nonatomic) UIView *tableViewWrapper; // ivar: _tableViewWrapper
@property (retain, nonatomic) UIButton *titleButton; // ivar: _titleButton
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView


-(BOOL)_accessibilityFontSizesEnabled;
-(BOOL)_canShowWhileLocked;
-(CGFloat)_calculatedContentHeight;
-(CGFloat)_contentHeightForPreferredContentSizeCategory;
-(CGFloat)_defaultCalculatedContentHeight;
-(CGFloat)_expandedContentHeight;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct CGRect )_preferredTableViewFrameWhenExpanded:(BOOL)arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonReleased:(id)arg0 ;
-(void)_setupAnimators;
-(void)_setupDeviceList;
-(void)_setupDeviceTitleView;
-(void)_setupTitleButtonIfNeeded;
-(void)_sortAndReloadDevices;
-(void)_toggleState;
-(void)_updateTableFrame:(BOOL)arg0 ;
-(void)_updateViewState;
-(void)collapseDeviceList;
-(void)didChangeToExpanded:(BOOL)arg0 ;
-(void)didTapWrapperView:(id)arg0 ;
-(void)expandDeviceList;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif