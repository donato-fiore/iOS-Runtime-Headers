// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNRECORDINGSYNCSTATE_H
#define KNRECORDINGSYNCSTATE_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNRecordingSyncState : NSObject <NSCopying>

 {
    BOOL _canClearOutOfSyncToken;
}


@property (readonly, nonatomic) NSUUID *outOfSyncToken; // ivar: _outOfSyncToken
@property (readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithOutOfSyncToken:(id)arg0 canClearOutOfSyncToken:(BOOL)arg1 ;
-(id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg0 withLocalOutOfSyncToken:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif