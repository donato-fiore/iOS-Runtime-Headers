// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPASSBOOKLOADER_H
#define SKUIPASSBOOKLOADER_H

@class NSString, NSOperationQueue;
@protocol PKAddPassesViewControllerDelegate, SKUIPassbookLoaderDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate>

 {
    SKUIClientContext *_clientContext;
    NSInteger _loadCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIPassbookLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


-(id)initWithClientContext:(id)arg0 ;
-(void)_didLoadWithPass:(id)arg0 error:(id)arg1 ;
-(void)_loadPassWithURL:(id)arg0 ;
-(void)_sendDidFinishIfFinished;
-(void)addPassesViewControllerDidFinish:(id)arg0 ;
-(void)loadPassWithURL:(id)arg0 ;


@end


#endif