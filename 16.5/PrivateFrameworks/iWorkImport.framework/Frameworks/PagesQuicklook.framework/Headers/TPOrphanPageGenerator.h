// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPORPHANPAGEGENERATOR_H
#define TPORPHANPAGEGENERATOR_H

@class NSString;
@protocol TPPageGenerator;

#import <Foundation/Foundation.h>

#import "TPDocumentRoot.h"

@interface TPOrphanPageGenerator : NSObject <TPPageGenerator>

 {
    TPDocumentRoot *_documentRoot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)wantsPageInSectionHint:(id)arg0 withState:(id)arg1 ;
-(id)init;
-(id)initWithDocumentRoot:(id)arg0 ;
-(void)createOrUpdatePageHintInSectionHint:(id)arg0 withState:(id)arg1 ;


@end


#endif