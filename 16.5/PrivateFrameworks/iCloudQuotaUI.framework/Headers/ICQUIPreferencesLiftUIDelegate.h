// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUIPREFERENCESLIFTUIDELEGATE_H
#define ICQUIPREFERENCESLIFTUIDELEGATE_H

@class ACAccount, NSString, UINavigationController;
@protocol ICQLiftUIPresenterDelegate, PreferencesRemoteUIDelegateProtocol;

#import <Foundation/Foundation.h>

#import "ICQLiftUIPresenter.h"

@interface ICQUIPreferencesLiftUIDelegate : NSObject <ICQLiftUIPresenterDelegate>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PreferencesRemoteUIDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigation; // ivar: _navigation
@property (retain, nonatomic) ICQLiftUIPresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)initWithNavigationController:(id)arg0 account:(id)arg1 ;
-(void)liftUIPresenterDidCancel:(id)arg0 ;
-(void)liftUIPresenterDidComplete:(id)arg0 ;
-(void)loadURL:(id)arg0 ;


@end


#endif