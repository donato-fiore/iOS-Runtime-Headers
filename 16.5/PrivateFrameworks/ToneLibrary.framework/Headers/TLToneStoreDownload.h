// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTONESTOREDOWNLOAD_H
#define TLTONESTOREDOWNLOAD_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLToneStoreDownload : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSString *_name;
    NSString *_albumTitle;
    NSString *_artistName;
    CGFloat _duration;
    NSString *_genreName;
    BOOL _isRingtone;
    NSUInteger _storeItemIdentifier;
    float _downloadProgress;
    NSString *_toneIdentifier;
}


@property (copy, nonatomic, setter=_setAlbumTitle:) NSString *albumTitle;
@property (copy, nonatomic, setter=_setArtistName:) NSString *artistName;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property (nonatomic, setter=_setDuration:) CGFloat duration;
@property (copy, nonatomic, setter=_setGenreName:) NSString *genreName;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (nonatomic, getter=isRingtone, setter=_setRingtone:) BOOL ringtone;
@property (nonatomic, setter=_setStoreItemIdentifier:) NSUInteger storeItemIdentifier;
@property (copy, nonatomic, setter=_setToneIdentifier:) NSString *toneIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif