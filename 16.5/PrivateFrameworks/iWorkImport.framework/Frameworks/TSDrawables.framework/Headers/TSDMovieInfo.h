// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMOVIEINFO_H
#define TSDMOVIEINFO_H

@class TSPData, NSString, NSURL;
@protocol TSDMixing, TSDCompatibilityAwareMediaContainer, TSDPlayableInfo;


#import "TSDMediaInfo.h"
#import "TSDMovieFingerprint.h"
#import "TSDMediaStyle.h"

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing, TSDCompatibilityAwareMediaContainer, TSDPlayableInfo>

 {
    TSPData *mMovieData;
    TSPData *mImportedAuxiliaryMovieData;
    NSString *mImportedAuxiliaryMovieDataOriginalFilename;
    BOOL mAudioOnly;
    TSPData *mAudioOnlyImageData;
    CGFloat mStartTime;
    CGFloat mEndTime;
    CGFloat mPosterTime;
    float mVolume;
    NSURL *mMovieRemoteURL;
    TSDMovieFingerprint *mFingerprint;
    TSPData *mPosterImageData;
    BOOL mPosterImageGeneratedWithAlphaSupport;
    CGSize mNaturalSize;
    BOOL mPlaysAcrossSlides;
    BOOL mNativeAudioRecording;
    TSDMediaStyle *mStyle;
}


@property (nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property (retain, nonatomic) TSPData *audioOnlyImageData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endTime;
@property (copy, nonatomic) TSDMovieFingerprint *fingerprint;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (copy, nonatomic) NSString *importedAuxiliaryMovieDataOriginalFilename;
@property (nonatomic) NSInteger loopOption; // ivar: mLoopOption
@property (retain, nonatomic) TSPData *movieData;
@property (retain, nonatomic) NSURL *movieRemoteURL;
@property (nonatomic, getter=isNativeAudioRecording) BOOL nativeAudioRecording;
@property (nonatomic) BOOL playsAcrossSlides;
@property (retain, nonatomic) TSPData *posterImageData;
@property (nonatomic) CGFloat posterTime;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, getter=isStreaming) BOOL streaming; // ivar: mStreaming
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLooping;
@property (readonly, nonatomic) BOOL supportsLoopingBackAndForth;
@property (readonly, nonatomic) BOOL supportsStartTimeAndEndTime;
@property (nonatomic) float volume;


+(CGFloat)defaultPosterTimeForDuration:(CGFloat)arg0 ;
+(id)presetKinds;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)canBeMediaPlaceholder;
-(BOOL)canBeReplaced;
-(BOOL)canChangeWrapType;
-(BOOL)canCopyData;
-(BOOL)canResetMediaSize;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)isAllowedInGroups;
-(BOOL)needsDownload;
-(BOOL)shouldShowInPrint;
-(BOOL)supportsAttachedComments;
-(BOOL)supportsHyperlinks;
-(BOOL)supportsStyleInspecting;
-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(BOOL)wantsStandardTypesInAdditionToTypesToPromiseWhenCopyingSingleDrawable;
-(BOOL)willRenderContentViaImager;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)animationFilters;
-(id)copyWithContext:(id)arg0 ;
-(id)generateEmptyPosterImageForContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 movieData:(id)arg3 loadedAsset:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 movieRemoteURL:(id)arg3 loadedAsset:(id)arg4 ;
-(id)makeAVAsset;
-(id)makeAVAssetWithOptions:(id)arg0 ;
-(id)mediaDataForDragging;
-(id)mediaDisplayName;
-(id)mediaFileType;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)p_makePosterImageDataWithAVAsset:(id)arg0 inContext:(id)arg1 time:(CGFloat)arg2 ;
-(id)pastedPropertyMapForStyle:(id)arg0 tailLineEndInfo:(int)arg1 ;
-(id)presetKind;
-(id)promisedDataForType:(id)arg0 ;
-(id)promisedTSPDataForType:(id)arg0 ;
-(id)style;
-(id)styleIdentifierTemplateForNewPreset;
-(id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg0 ;
-(id)synchronouslyGenerateNewPosterImageForAsset:(id)arg0 time:(CGFloat)arg1 ;
-(id)typeName;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(int)intValueForProperty:(int)arg0 ;
-(struct CGSize )rawDataSize;
-(void)acceptVisitor:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)p_setPropertiesFromLoadedAsset:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg0 ;


@end


#endif