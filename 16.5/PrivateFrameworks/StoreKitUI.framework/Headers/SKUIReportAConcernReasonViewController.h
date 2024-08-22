// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREPORTACONCERNREASONVIEWCONTROLLER_H
#define SKUIREPORTACONCERNREASONVIEWCONTROLLER_H

@class UIViewController, NSString, UITableView;
@protocol UITableViewDelegate;


#import "SKUIReportAConcernConfiguration.h"
#import "SKUIReportAConcernReasonDataSource.h"

@interface SKUIReportAConcernReasonViewController : UIViewController <UITableViewDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) SKUIReportAConcernConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) SKUIReportAConcernReasonDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelPressed:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif