// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISETTINGSEDITTRANSACTION_H
#define SKUISETTINGSEDITTRANSACTION_H

@class NSSet, NSLock, NSMutableSet;
@protocol SKUISettingsEditTransactionDelegate;

#import <Foundation/Foundation.h>


@interface SKUISettingsEditTransaction : NSObject {
    NSSet *_all;
    id *_commitBlock;
    NSLock *_lock;
    NSMutableSet *_pending;
    BOOL _success;
}


@property (weak, nonatomic) NSObject<SKUISettingsEditTransactionDelegate> *delegate; // ivar: _delegate


-(BOOL)isCommiting;
-(BOOL)isValid;
-(id)initWithSettingDescriptions:(id)arg0 ;
-(void)_finalizeCommit;
-(void)_settingDescription:(id)arg0 completedWithSuccess:(BOOL)arg1 ;
-(void)beginTransaction;
-(void)cancelTransaction;
-(void)commitTransaction;
-(void)rollbackTransaction;


@end


#endif