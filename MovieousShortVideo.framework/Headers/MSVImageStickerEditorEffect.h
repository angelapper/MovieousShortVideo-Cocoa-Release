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
 * 图片贴纸编辑器特效。
 */
@interface MSVImageStickerEditorEffect : MovieousImageStickerCaptureEffect
<
MSVEditorEffect
>

/**
 * 此特效在主轨中的有效时间区间.
 */
@property (nonatomic, assign) MovieousTimeRange timeRangeAtMainTrack;

/**
 * 用另一个 MSVImageStickerEditorEffect 对象初始化此 MSVImageStickerEditorEffect
 *
 * @param imageStickerEditorEffect 用于初始化的另一个 MSVImageStickerEditorEffect 对象。
 *
 * @return 初始化完成的 MSVImageStickerEditorEffect 对象。
 */
- (instancetype)initWithImageStickerEditorEffect:(MSVImageStickerEditorEffect *)imageStickerEditorEffect;

@end

NS_ASSUME_NONNULL_END
