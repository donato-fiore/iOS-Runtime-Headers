// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREDEEMRESULTSVIEW_H
#define SKUIREDEEMRESULTSVIEW_H

@class UITableView, NSString, NSArray;
@protocol UITableViewDelegate, UITableViewDataSource, SKUIRedeemResultsViewDelegate;



@interface SKUIRedeemResultsView : UITableView <UITableViewDelegate, UITableViewDataSource>

 {
    UIEdgeInsets _contentInsetAdjustments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SKUIRedeemResultsViewDelegate> *resultsDelegate; // ivar: _resultsDelegate
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif