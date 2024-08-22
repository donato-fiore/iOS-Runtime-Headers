// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBLUETOOTHTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFBLUETOOTHTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class NSArray, NSString, UITableView;
@protocol WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate;


#import "WFTriggerConfigurationViewController.h"

@interface WFBluetoothTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>



@property (copy, nonatomic) NSArray *allDevices; // ivar: _allDevices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)fetchBluetoothDevices;
-(void)finishWithDevices:(id)arg0 ;
-(void)loadView;
-(void)presentNavControllerWithRootViewController:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)triggerTableViewController:(id)arg0 didFinishWithAnySelected:(BOOL)arg1 orSelectedOptions:(id)arg2 ;
-(void)triggerTableViewControllerDidCancel:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif