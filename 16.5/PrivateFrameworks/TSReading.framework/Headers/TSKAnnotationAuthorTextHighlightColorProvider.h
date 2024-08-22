// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKANNOTATIONAUTHORTEXTHIGHLIGHTCOLORPROVIDER_H
#define TSKANNOTATIONAUTHORTEXTHIGHLIGHTCOLORPROVIDER_H

@class NSString;
@protocol TSKCGColorProvider;

#import <Foundation/Foundation.h>

#import "TSKAnnotationAuthor.h"

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider>

 {
    TSKAnnotationAuthor *mAnnotationAuthor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAnnotationAuthor:(id)arg0 ;
-(struct CGColor *)cgColor;
-(void)dealloc;


@end


#endif