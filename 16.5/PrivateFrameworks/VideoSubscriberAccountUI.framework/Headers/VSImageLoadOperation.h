// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIMAGELOADOPERATION_H
#define VSIMAGELOADOPERATION_H

@class VSAsyncOperation, VSAuditToken, NSItemProvider, VSOptional, NSURLSessionTask;



@interface VSImageLoadOperation : VSAsyncOperation

@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (nonatomic, getter=isNonAppInitiated) BOOL nonAppInitiated; // ivar: _nonAppInitiated
@property (readonly, nonatomic) CGSize preferredImageSize; // ivar: _preferredImageSize
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (retain, nonatomic) NSURLSessionTask *task; // ivar: _task


-(id)init;
-(id)initWithItemProvider:(id)arg0 preferredImageSize:(struct CGSize )arg1 ;
-(void)_beginFetchingDataFromURL:(id)arg0 ;
-(void)_finishWithImageData:(id)arg0 orError:(id)arg1 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif