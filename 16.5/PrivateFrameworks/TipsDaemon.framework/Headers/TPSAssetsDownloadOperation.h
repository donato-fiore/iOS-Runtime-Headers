// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSASSETSDOWNLOADOPERATION_H
#define TPSASSETSDOWNLOADOPERATION_H

@class TPSAsyncOperation, NSString, NSURL;



@interface TPSAssetsDownloadOperation : TPSAsyncOperation {
    ? assetIdentifier;
    ? assetURLPath;
    ? downloadedURL;
    ? urlSessionItem;
}


@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, copy) NSString *assetURLPath;
@property (nonatomic, copy) NSURL *downloadedURL;
@property (nonatomic) float priority; // ivar: priority


-(id)init;
-(id)initWithAssetIdentifier:(id)arg0 assetURLPath:(id)arg1 ;
-(void)main;


@end


#endif