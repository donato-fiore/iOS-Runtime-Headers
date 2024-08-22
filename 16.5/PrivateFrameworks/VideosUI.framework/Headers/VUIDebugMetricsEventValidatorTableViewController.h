// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEBUGMETRICSEVENTVALIDATORTABLEVIEWCONTROLLER_H
#define VUIDEBUGMETRICSEVENTVALIDATORTABLEVIEWCONTROLLER_H

@class UITableViewController, NSDictionary, NSArray;



@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *event; // ivar: _event
@property (retain, nonatomic) NSArray *results; // ivar: _results


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithEvent:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_reloadResults:(id)arg0 ;


@end


#endif