// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAANNOTATIONREFERENCE_H
#define TSAANNOTATIONREFERENCE_H

@protocol TSKAnnotation;

#import <Foundation/Foundation.h>


@interface TSAAnnotationReference : NSObject

@property (retain, nonatomic) NSObject<TSKAnnotation> *annotation; // ivar: _annotation
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex


-(BOOL)isValidAndInDocument;
-(BOOL)referencesAnnotation:(id)arg0 ;


@end


#endif