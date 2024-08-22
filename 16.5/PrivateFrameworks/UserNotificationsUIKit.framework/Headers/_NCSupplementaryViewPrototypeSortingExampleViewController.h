// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NCSUPPLEMENTARYVIEWPROTOTYPESORTINGEXAMPLEVIEWCONTROLLER_H
#define _NCSUPPLEMENTARYVIEWPROTOTYPESORTINGEXAMPLEVIEWCONTROLLER_H

@class UITableView, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "NCSupplementaryViewPrototypeRecipeViewController.h"

@interface _NCSupplementaryViewPrototypeSortingExampleViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_dateModifiedText;
-(id)_titleText;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_updatedDateModified;
-(void)loadView;
-(void)setDateModified:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif