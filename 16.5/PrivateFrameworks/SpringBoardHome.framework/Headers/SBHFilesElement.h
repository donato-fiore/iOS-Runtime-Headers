// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFILESELEMENT_H
#define SBHFILESELEMENT_H



#import "SBHCustomIconElement.h"

@interface SBHFilesElement : SBHCustomIconElement



+(id)elementIdentifier;
+(id)elementKind;
-(BOOL)iconSupportsConfiguration:(id)arg0 ;
-(BOOL)iconSupportsRasterization:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(id)configurationStorageIdentifier;
-(id)containerBundleIdentifier;
-(id)displayName;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;


@end


#endif