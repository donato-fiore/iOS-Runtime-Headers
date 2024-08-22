// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEBUGMETRICSEVENTVIEWCONTROLLER_H
#define VUIDEBUGMETRICSEVENTVIEWCONTROLLER_H

@class UITableViewController;


#import "VUIDebugMetricsEvent.h"

@interface VUIDebugMetricsEventViewController : UITableViewController

@property (retain, nonatomic) VUIDebugMetricsEvent *event; // ivar: _event


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithEvent:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)performValidation;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif