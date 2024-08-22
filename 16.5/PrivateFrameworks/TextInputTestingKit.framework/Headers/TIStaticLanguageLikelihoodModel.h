// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISTATICLANGUAGELIKELIHOODMODEL_H
#define TISTATICLANGUAGELIKELIHOODMODEL_H

@class NSString, TIInputMode;
@protocol TILanguageLikelihoodModeling;

#import <Foundation/Foundation.h>


@interface TIStaticLanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TIInputMode *primaryInputMode; // ivar: _primaryInputMode
@property (readonly, nonatomic) float primaryLanguageWeight;
@property (readonly, nonatomic) TIInputMode *secondaryInputMode; // ivar: _secondaryInputMode
@property (readonly, nonatomic) float secondaryLanguageWeight; // ivar: _secondaryLanguageWeight
@property (readonly) Class superclass;


-(CGFloat)lastOfflineAdaptationTimeForApp:(id)arg0 ;
-(NSUInteger)emojiUsageCountForApp:(id)arg0 lastEmojiCountUpdateTime:(*CGFloat)arg1 ;
-(float)_priorProbabilityForLanguage:(id)arg0 recipient:(id)arg1 ;
-(id)initWithPrimaryInputMode:(id)arg0 secondaryInputMode:(id)arg1 secondaryLanguageWeight:(float)arg2 ;
-(id)rankedLanguagesForRecipient:(id)arg0 ;
-(void)addEvidence:(id)arg0 timestamp:(CGFloat)arg1 adaptationType:(int)arg2 forRecipient:(id)arg3 app:(id)arg4 language:(id)arg5 ;
-(void)priorProbabilityForLanguages:(id)arg0 recipient:(id)arg1 handler:(id)arg2 ;


@end


#endif