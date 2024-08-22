// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSLOADALLAPPICONSOPERATION_H
#define VSLOADALLAPPICONSOPERATION_H

@class VSAsyncOperation, NSArray, NSError, NSOperationQueue;



@interface VSLoadAllAppIconsOperation : VSAsyncOperation

@property (retain, nonatomic) NSArray *appDescriptions; // ivar: _appDescriptions
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (copy, nonatomic) id *resultCompletionBlock; // ivar: _resultCompletionBlock
@property (nonatomic) BOOL shouldPrecomposeIcon; // ivar: _shouldPrecomposeIcon


-(id)init;
-(id)initWithApps:(id)arg0 shouldPrecomposeIcon:(BOOL)arg1 ;
-(id)initWithApps:(id)arg0 shouldPrecomposeIcon:(BOOL)arg1 preferredSize:(struct CGSize )arg2 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif