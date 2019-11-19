//
//  MSVImageStickerEditorEffect.h
//  MovieousShortVideo
//
//  Created by Chris Wang on 2018/10/24.
//  Copyright © 2018 Movieous Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSVEditorEffect.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Image sticker effects.
 */
@interface MSVImageStickerEditorEffect : MovieousImageStickerCaptureEffect
<
MSVEditorEffect
>

/**
 * The time interval for applying an external filter in the main track.
 */
@property (nonatomic, assign) MovieousTimeRange timeRangeAtMainTrack;

/**
 * Initiate the MSVImageStickerEditorEffect with another MSVImageStickerEditorEffect object.
 *
 * @param imageStickerCaptureEffect Another MSVImageStickerEditorEffect used to initiate the instance.
 *
 * @return The initialized MSVImageStickerEditorEffect instance.
 */
- (instancetype)initWithImageStickerCaptureEffect:(MSVImageStickerEditorEffect *)imageStickerCaptureEffect;

@end

NS_ASSUME_NONNULL_END
