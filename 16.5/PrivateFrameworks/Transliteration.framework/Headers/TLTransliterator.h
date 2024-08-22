// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTRANSLITERATOR_H
#define TLTRANSLITERATOR_H


#import <Foundation/Foundation.h>


@interface TLTransliterator : NSObject {
    unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> _compositeTransliterator;
}




-(id)generateCandidatesForInputWord:(id)arg0 candidateContext:(id)arg1 maxCandidatesCount:(NSInteger)arg2 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;


@end


#endif