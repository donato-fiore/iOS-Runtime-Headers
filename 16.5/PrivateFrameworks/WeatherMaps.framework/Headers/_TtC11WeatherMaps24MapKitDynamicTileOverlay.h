// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS24MAPKITDYNAMICTILEOVERLAY_H
#define _TTC11WEATHERMAPS24MAPKITDYNAMICTILEOVERLAY_H

@class MKDynamicTileOverlay;



@interface _TtC11WeatherMaps24MapKitDynamicTileOverlay : MKDynamicTileOverlay {
    ? overlayDescriptor;
    ? tasks;
    ? lock;
    ? overlayRenderer;
    ? timeConfiguration;
    ? blendMode;
    ? opacity;
    ? colorMap;
}




-(id)init;
-(void)cancelLoadingTileAtPath:(struct ? )arg0 ;
-(void)loadTileAtPath:(struct ? )arg0 result:(id)arg1 ;


@end


#endif