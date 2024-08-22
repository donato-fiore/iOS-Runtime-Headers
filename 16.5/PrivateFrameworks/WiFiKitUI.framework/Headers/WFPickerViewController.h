// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPICKERVIEWCONTROLLER_H
#define WFPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, WFNetworkListing, WFNetworkListRecord, WFNetworkListDelegate;



@interface WFPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing>



@property (retain) NSObject<WFNetworkListRecord> *currentNetwork; // ivar: _currentNetwork
@property float currentNetworkScaledRSSI; // ivar: _currentNetworkScaledRSSI
@property NSUInteger currentNetworkSignalBars;
@property NSInteger currentNetworkState; // ivar: _currentNetworkState
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceCapability; // ivar: _deviceCapability
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL dismissed; // ivar: _dismissed
@property (readonly) NSUInteger hash;
@property (weak) NSObject<WFNetworkListDelegate> *listDelegate; // ivar: _listDelegate
@property (nonatomic) BOOL showCurrentNetworkTop; // ivar: _showCurrentNetworkTop
@property (nonatomic) BOOL showOtherNetwork; // ivar: showOtherNetwork
@property (retain, nonatomic) NSArray *sortedNetworks; // ivar: _sortedNetworks
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) BOOL userAutoJoinEnabled;


-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForNetworkRecord:(id)arg0 tableView:(id)arg1 indexPath:(id)arg2 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)powerStateDidChange:(BOOL)arg0 ;
-(void)refresh;
-(void)setNetworks:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif