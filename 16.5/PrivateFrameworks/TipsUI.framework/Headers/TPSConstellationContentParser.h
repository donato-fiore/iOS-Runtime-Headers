// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCONSTELLATIONCONTENTPARSER_H
#define TPSCONSTELLATIONCONTENTPARSER_H

@class TPSAssetFileInfoManager, NSURL, NSMutableDictionary, NSAttributedString, UIFont, NSDictionary, NSString, UITraitCollection;
@protocol TPSConstellationContentParserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSConstellationContentParser : NSObject

@property (retain, nonatomic) TPSAssetFileInfoManager *assetFileInfoManager; // ivar: _assetFileInfoManager
@property (retain, nonatomic) NSURL *assetsBaseURL; // ivar: _assetsBaseURL
@property (retain, nonatomic) NSMutableDictionary *assetsSessionItemMap; // ivar: _assetsSessionItemMap
@property (retain, nonatomic) NSMutableDictionary *assetsTextAttachmentMap; // ivar: _assetsTextAttachmentMap
@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (retain, nonatomic) UIFont *boldFont; // ivar: _boldFont
@property (retain, nonatomic) NSDictionary *defaultAttributes; // ivar: _defaultAttributes
@property (weak, nonatomic) NSObject<TPSConstellationContentParserDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL delegateRespondsToBoldFont; // ivar: _delegateRespondsToBoldFont
@property (nonatomic) BOOL delegateRespondsToItalicFont; // ivar: _delegateRespondsToItalicFont
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL ignoreLinks; // ivar: _ignoreLinks
@property (retain, nonatomic) UIFont *italicFont; // ivar: _italicFont
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSInteger numOfActiveRemoteURLSessions; // ivar: _numOfActiveRemoteURLSessions
@property (nonatomic) int numberOfParagraphTags; // ivar: _numberOfParagraphTags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(id)inlineIconPlaceHolderImage;
-(CGFloat)scaledValueForSize:(CGFloat)arg0 ;
-(id)_colorForSystemColorString:(id)arg0 ;
-(id)accessibilityLabelFromAttribute:(id)arg0 ;
-(id)attributedStringForConstellationContent:(id)arg0 defaultAttributes:(id)arg1 identifier:(id)arg2 language:(id)arg3 assetsBaseURL:(id)arg4 assetFileInfoManager:(id)arg5 error:(*id)arg6 ;
-(id)attributedStringForContent:(id)arg0 error:(*id)arg1 ;
-(id)attributedStringForInlineIconNode:(id)arg0 ;
-(id)attributedStringForParagraphNode:(id)arg0 error:(*id)arg1 ;
-(id)attributedStringForPersonalizedTextNode:(id)arg0 error:(*id)arg1 ;
-(id)attributedStringForSymbolNode:(id)arg0 ;
-(id)attributedStringForTextNode:(id)arg0 ;
-(id)attributesWithMarks:(id)arg0 ;
-(id)init;
-(struct CGRect )boundsForImage:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGSize )normalizedSizeFromSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)cancelAssetFetches;
-(void)dealloc;
-(void)fetchAssetConfiguration:(id)arg0 cacheIdentifier:(id)arg1 textAttachment:(id)arg2 ;


@end


#endif