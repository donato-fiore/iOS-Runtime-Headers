// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMAPSEARCHTABLEVIEWCONTROLLER_H
#define WFMAPSEARCHTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray;
@protocol UISearchResultsUpdating, WFMapSearchTableViewControllerDelegate;



@interface WFMapSearchTableViewController : UITableViewController <UISearchResultsUpdating>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFMapSearchTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *mapItems; // ivar: _mapItems
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif