// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISUPPLEMENTALLEXICONOPERATION_H
#define _UISUPPLEMENTALLEXICONOPERATION_H


#import <Foundation/Foundation.h>

#import "_UISupplementalLexicon.h"

@interface _UISupplementalLexiconOperation : NSObject

@property (readonly, weak, nonatomic) _UISupplementalLexicon *lexicon; // ivar: _lexicon
@property (readonly, nonatomic) NSUInteger lexiconIdentifier; // ivar: _lexiconIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initAddOperationWithLexicon:(id)arg0 ;
-(id)initRemoveOperationWithLexiconIdentifier:(NSUInteger)arg0 ;


@end


#endif