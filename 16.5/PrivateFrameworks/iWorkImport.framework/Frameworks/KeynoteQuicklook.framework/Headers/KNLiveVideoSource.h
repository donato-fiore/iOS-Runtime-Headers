// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNLIVEVIDEOSOURCE_H
#define KNLIVEVIDEOSOURCE_H

@class TSPObject, NSString, TSPData;
@protocol TSKModel, TSPCopying;


#import "KNLiveVideoCaptureDeviceDescription.h"
#import "KNLiveVideoSourceCollaborationCommandUsageState.h"

@interface KNLiveVideoSource : TSPObject <TSKModel, TSPCopying>

 {
    NSString *_name;
    NSInteger _symbolImageIdentifier;
    NSInteger _symbolTintColorIdentifier;
    BOOL _isDefaultSource;
    KNLiveVideoCaptureDeviceDescription *_captureDeviceDescription;
    BOOL _definedCaptureDeviceDescription;
    BOOL _definedPosterImageData;
    BOOL _definedSymbolAbbreviationText;
    KNLiveVideoCaptureDeviceDescription *_defaultSourceCaptureDeviceDescription;
}


@property (readonly, nonatomic) BOOL canBeImplicitlyRemovedOnUndo;
@property (readonly, nonatomic) BOOL canChangeCaptureDeviceDescription;
@property (copy, nonatomic) KNLiveVideoCaptureDeviceDescription *captureDeviceDescription;
@property (readonly, nonatomic) KNLiveVideoSourceCollaborationCommandUsageState *collaborationCommandUsageState; // ivar: _collaborationCommandUsageState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TSPData *posterImageData; // ivar: _posterImageData
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbolAbbreviationText; // ivar: _symbolAbbreviationText
@property (nonatomic) NSInteger symbolImageIdentifier;
@property (nonatomic) NSInteger symbolTintColorIdentifier;


+(BOOL)needsObjectUUID;
+(NSInteger)defaultSymbolImageIdentifier;
+(NSInteger)defaultSymbolImageIdentifierForCaptureDeviceIdentifier:(id)arg0 ;
+(NSInteger)defaultSymbolTintColorIdentifier;
+(NSInteger)p_archivedSymbolImageIdentifierForSymbolImageIdentifier:(NSInteger)arg0 ;
+(NSInteger)p_archivedSymbolTintColorIdentifierForSymbolTintColorIdentifier:(NSInteger)arg0 ;
+(id)accessibilityLabelForCameraArrowTriangle2CirclePath;
+(id)availableSymbolImageIdentifiers;
+(id)availableSymbolTintColorIdentifiers;
+(id)colorForSymbolTintColorIdentifier:(NSInteger)arg0 ;
+(id)colorSetForSymbolTintColorIdentifier:(NSInteger)arg0 ;
+(id)systemImageNameForSymbolImageIdentifier:(NSInteger)arg0 ;
-(BOOL)isEquivalentToLiveVideoSource:(id)arg0 ;
-(BOOL)supportsBackgroundKind:(NSInteger)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 isDefaultSource:(BOOL)arg2 ;
-(void)didInitFromSOS;
-(void)i_updateDefaultSourceCaptureDeviceDescription:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)rollbackToCollaborationCommandUsageState:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)willBeUsedByCollaborationCommandWithUsageToken:(id)arg0 ;


@end


#endif