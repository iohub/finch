#pragma once

#include "Array.h"
#include "CodeBlock.h"
#include "Ref.h"

namespace Finch
{
    //### bob: code is never removed from this, even if no longer needed.
    //    eventually, it would be good to ref-count or gc the contents of this.
    // A table of CodeBlocks. The compiler adds compiled code to this so that
    // a block can be referenced by ID.
    class BlockTable
    {
    public:
        // Adds the given block to the table if not already present and returns
        // its ID.
        int Add(Ref<CodeBlock> code);

        // Looks up the block with the given ID in the table.
        CodeBlock & Find(int id);
        
    private:
        Array<Ref<CodeBlock> > mBlocks;
    };
}

