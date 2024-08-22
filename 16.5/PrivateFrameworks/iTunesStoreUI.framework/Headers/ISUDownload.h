// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISUDOWNLOAD_H
#define ISUDOWNLOAD_H

@class SSDownload, NSString, NSNumber, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISUDownload : NSObject {
    SSDownload *_download;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSInteger bytesDownloaded;
@property (readonly, nonatomic) NSInteger bytesTotal;
@property (readonly, nonatomic, getter=isContentRestricted) BOOL contentRestricted;
@property (readonly, nonatomic) CGFloat estimatedSecondsRemaining;
@property (retain, nonatomic) SSDownload *managedDownload;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) NSString *phaseIdentifier;
@property (readonly, nonatomic, getter=isPurchase) BOOL purchase;
@property (readonly, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;
@property (readonly, nonatomic) NSNumber *storePreorderIdentifier;
@property (readonly, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSString *title;


+(id)downloadExternalProperties;
+(id)downloadProperties;
+(void)initialize;
-(id)copyLocalizedStatusString;
-(id)initWithManagedDownload:(id)arg0 ;
-(void)dealloc;
-(void)resetPreorderState;


@end


#endif