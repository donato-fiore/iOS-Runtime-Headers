// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVMONOGRAMRESOURCEIMAGEGENERATOR_H
#define _TVMONOGRAMRESOURCEIMAGEGENERATOR_H

@class TVMonogramImageGenerator;



@interface _TVMonogramResourceImageGenerator : TVMonogramImageGenerator



+(BOOL)isResourceURL:(id)arg0 ;
+(id)tintImage:(id)arg0 withColor:(id)arg1 ;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif