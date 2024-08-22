// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFFEEDBACKFORMVIEWDATASOURCE_H
#define TFFEEDBACKFORMVIEWDATASOURCE_H

@class NSString;
@protocol UITableViewDataSource, UITableViewDelegate;

#import <Foundation/Foundation.h>

#import "TFFeedbackFormCellUpdater.h"
#import "TFFeedbackFormPresenter.h"

@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>



@property (readonly, nonatomic) TFFeedbackFormCellUpdater *cellUpdater; // ivar: _cellUpdater
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TFFeedbackFormPresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPresenter:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)prepareTableViewForDataSource:(id)arg0 ;


@end


#endif