// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSOSTRANSACTION_H
#define TPSOSTRANSACTION_H

@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface TPSOSTransaction : NSObject

@property (readonly, nonatomic) CGFloat creationTime; // ivar: _creationTime
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)transactionWithName:(id)arg0 ;
-(id)initWithTransactionName:(id)arg0 ;
-(void)dealloc;
-(void)endTransaction;


@end


#endif