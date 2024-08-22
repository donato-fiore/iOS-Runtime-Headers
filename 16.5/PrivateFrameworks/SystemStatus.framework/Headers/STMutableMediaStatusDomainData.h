// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLEMEDIASTATUSDOMAINDATA_H
#define STMUTABLEMEDIASTATUSDOMAINDATA_H

@class NSArray, NSSet, NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STMediaStatusDomainData.h"
#import "STMutableActivityAttributionCatalog.h"
#import "STMutableListData.h"

@interface STMutableMediaStatusDomainData : STMediaStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (readonly, copy, nonatomic) STMutableActivityAttributionCatalog *attributionCatalog;
@property (copy, nonatomic) NSArray *audioRecordingAttributionList;
@property (copy, nonatomic) NSSet *audioRecordingAttributions;
@property (readonly, copy, nonatomic) STMutableListData *cameraAttributionListData;
@property (copy, nonatomic) NSArray *cameraAttributions;
@property (copy, nonatomic) NSArray *cameraCaptureAttributionList;
@property (copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mutedAudioRecordingAttributionList;
@property (copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributionCatalog:(id)arg0 cameraAttributionListData:(id)arg1 ;
-(void)addAudioRecordingAttribution:(id)arg0 ;
-(void)addCameraAttribution:(id)arg0 ;
-(void)addCameraCaptureAttribution:(id)arg0 ;
-(void)addMutedAudioRecordingAttribution:(id)arg0 ;
-(void)removeAudioRecordingAttribution:(id)arg0 ;
-(void)removeCameraAttribution:(id)arg0 ;
-(void)removeCameraCaptureAttribution:(id)arg0 ;
-(void)removeMutedAudioRecordingAttribution:(id)arg0 ;


@end


#endif