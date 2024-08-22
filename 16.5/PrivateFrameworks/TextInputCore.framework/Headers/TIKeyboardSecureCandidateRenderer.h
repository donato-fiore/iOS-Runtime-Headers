// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDSECURECANDIDATERENDERER_H
#define TIKEYBOARDSECURECANDIDATERENDERER_H

@class NSMutableDictionary, CAContext, NSString;

#import <Foundation/Foundation.h>


@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary *_accessibilityLabelCache;
}


@property (readonly, nonatomic) CAContext *context; // ivar: _context
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache; // ivar: _secureCandidateCache


+(id)allRenderers;
-(id)_truncationSentinel;
-(id)accessibilityLabelForSlotID:(unsigned int)arg0 ;
-(id)accessibilityLabelsForSecureHeaders:(id)arg0 secureContents:(id)arg1 truncationSentinel:(id)arg2 ;
-(id)cachedCandidateForSecureCandidate:(id)arg0 ;
-(id)cachedPayloadForSecureCandidateSlotID:(unsigned int)arg0 ;
-(id)init;
-(id)initForLocalizedStrings;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)localizedApplicationNameWithBundleIdentifier:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)slotIDsFromSecureCandidates:(id)arg0 withRenderTraits:(id)arg1 ;
-(id)updateCachedCandidate:(id)arg0 withCandidateString:(id)arg1 ;
-(struct CGImage *)imageForSendCurrentLocationWithRenderTraits:(id)arg0 ;
-(struct __CFArray *)arrayOfContexts:(NSUInteger)arg0 withRenderTraits:(id)arg1 ;
-(struct __CFArray *)imagesFromContexts:(struct __CFArray *)arg0 ;
-(struct __CFArray *)imagesFromSecureCandidates:(id)arg0 withRenderTraits:(id)arg1 outAccessibilityLabels:(*id)arg2 ;
-(unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)arg0 ;
-(void)cacheAccessibilityLabel:(id)arg0 forSlotID:(unsigned int)arg1 ;
-(void)clearSecureCandidateCache;
-(void)createContext;
-(void)dealloc;
-(void)recreateContext;


@end


#endif