// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCONTINUATION_H
#define SUCONTINUATION_H

@protocol SUContinuationDelegate;

#import <Foundation/Foundation.h>


@interface SUContinuation : NSObject

@property (nonatomic) NSObject<SUContinuationDelegate> *delegate; // ivar: _delegate


-(void)cancel;
-(void)sendErrorToDelegate:(id)arg0 ;
-(void)sendFinishToDelegate;
-(void)start;


@end


#endif