// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTSORTINGVIEWCONTROLLER_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTSORTINGVIEWCONTROLLER_H

@class UITableView, NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "NCSupplementaryViewPrototypeRecipeViewController.h"

@interface NCSupplementaryViewPrototypeRecipeContentSortingViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_tableView;
    NSArray *_exampleGroupIdentifiersAndBaseColors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)title;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_colorForSection:(NSUInteger)arg0 index:(NSUInteger)arg1 ;
-(id)_groupingIdentifierForSection:(NSUInteger)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif