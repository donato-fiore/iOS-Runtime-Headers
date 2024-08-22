// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTBATCHTEXTTRANSLATIONREQUEST_H
#define _LTBATCHTEXTTRANSLATIONREQUEST_H

@class LTTranslationRequest, NSArray;



@interface _LTBatchTextTranslationRequest : LTTranslationRequest

@property (copy, nonatomic) NSArray *paragraphs; // ivar: _paragraphs
@property (copy, nonatomic) id *textHandler; // ivar: _textHandler
@property (copy, nonatomic) id *translationHandler; // ivar: _translationHandler


-(id)loggingType;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;
-(void)_translationFailedWithError:(id)arg0 ;


@end


#endif