// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQLIFTUIPRESENTER_H
#define ICQLIFTUIPRESENTER_H

@class NSDictionary, NSURL;
@protocol ICQLiftUIPresenterDelegate;

#import <Foundation/Foundation.h>

#import "ICQLiftUIController.h"
#import "_TtC13iCloudQuotaUI19ICQLiftUIDataSource.h"

@interface ICQLiftUIPresenter : NSObject

@property (retain, nonatomic) ICQLiftUIController *controller; // ivar: _controller
@property (copy, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) _TtC13iCloudQuotaUI19ICQLiftUIDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<ICQLiftUIPresenterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSURL *liftUIPageURL; // ivar: _liftUIPageURL


-(BOOL)embedInViewController:(id)arg0 ;
-(BOOL)presentInViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)pushInNavigationController:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 account:(id)arg1 data:(id)arg2 ;
-(void)didCancel;
-(void)didFinish;
-(void)didLoadWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performICQActionWithName:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)reloadWithHeaders:(id)arg0 ;
-(void)updateStoreDataForKey:(id)arg0 value:(id)arg1 ;


@end


#endif