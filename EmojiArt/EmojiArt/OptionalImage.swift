//
//  OptionalImage.swift
//  EmojiArt
//
//  Created by Akmuhammet Ashyralyyev on 2021-01-24.
//

import SwiftUI

struct OptionalImage: View {
    var uiImage: UIImage?
    
    var body: some View {
        Group {
            if uiImage != nil {
                Image(uiImage: uiImage!)
            }
        }
    }
}
